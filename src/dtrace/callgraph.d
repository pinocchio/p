#!/usr/sbin/dtrace -q -o graph.in -s 

/*
*    dot -T jpg -o callgraph.jpg graph.in
*/


pid$1:::entry
{
    @call_stats[ufunc(ucaller), strjoin(strjoin(probemod,"`"), probefunc)] = count();
}

END
{
    printf("digraph foo {\n");
    printa(" \"%A\" -> \"%s\" [weight=%@d];\n", @call_stats);
    printf("}\n");
}

