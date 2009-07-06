SUBDIRS=src doc
dist_doc_DATA=README

test:
	cd src && make test && ./test

run:
	cd src && make && ./pinocchio

ci: test run
	svn ci

update:
	autoreconf --install && ./configure
