#!/usr/sbin/dtrace -q -o graph.in -s 

/*
*    dot -T jpg -o callgraph.jpg graph.in
*/

BEGIN 
{
    last_opcode = "main"
}


pinocchio::opcode
{
    @call_stats[last_opcode, probefunc] = count();
    last_opcode = probefunc;
}

END
{
    printf("digraph foo {\n");
    printa(" \"%s\" -> \"%s\" [weight=%@d];\n", @call_stats);
    printf("}\n");
}

