
/* end of generated code */

    bootstrap_scheme_symbols();

    object scoped_main;
    eval_in_scope(lambda_1_x, env, scoped_main);

    object const_scoped_main = (object)make_ast_const(scoped_main);

    ast_call_object maincall = make_ast_call(const_scoped_main, 0);
    
    context_object make_eval_context(ci, maincall, env); 
    
    printf("------- Starting eval ------\n");
    object result = transfer();

    print_object(result);

    return EXIT_SUCCESS;
}
