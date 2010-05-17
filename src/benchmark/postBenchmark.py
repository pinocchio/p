#! /usr/bin/env python
# -*- coding: utf-8 -*-
# ============================================================================
# Sample script that shows how to save result data #
# ============================================================================
from datetime import datetime
import urllib, urllib2
import socket
import re

# ============================================================================

CODESPEED_URL = 'http://pinocchio.unibe.ch/speedcenter/'

REVISION      = re.search('[1-9][0-9]*', "$Revision: 144 $").group(0)
BENCHMARK     = "Fib 30"

# ============================================================================
data = {
    'commitid': REVISION,
    'project': 'pinocchio',
    'executable_name': 'pinocchio',
    'benchmark': BENCHMARK,
    'environment': socket.gethostname(),
    'result_value': 400,
    'result_date': datetime.today(), # Optional
    'lessisbetter': False,           # Optional. Default is True
    'std_dev': 1.11111,              # Optional. Default is blank
    'max': 2,                        # Optional. Default is blank
    'min': 1.0,                      # Optional. Default is blank
}

# ============================================================================
def add(data):
    params = urllib.urlencode(data)
    f = None
    response = "None"
    print "Executable %s, revision %s, benchmark %s" % (data['executable_name'], data['commitid'], data['benchmark'])
    try:
        f = urllib2.urlopen(CODESPEED_URL + 'result/add/', params)
        response = f.read()
        f.close()
    except urllib2.URLError, e:
        if hasattr(e, 'reason'):
            response = '\n  We failed to reach a server\n'
            response += '  Reason: ' + str(e.reason)
        elif hasattr(e, 'code'):
            response = '\n  The server couldn\'t fulfill the request\n'
            response += '  Error code: ' + str(e)
    print "Server (%s) response: %s\n" % (CODESPEED_URL, response)

# ============================================================================
if __name__ == "__main__":
    add(data)
