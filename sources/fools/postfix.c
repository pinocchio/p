
/* end of generated code */

    context_object make_eval_context(ci, lambda_1_x, env);
    build_return(ci, rc);
    transfer(ci);

    object scoped_main = return_value(rc);

    assert(header(scoped_main.pointer).native_class ==
           fools_system->iscope_class);

    object const_scoped_main = (object)make_iconst(scoped_main);

    appcall_object maincall = make_appcall(const_scoped_main, 0);
    
    make_eval_context(ci, maincall, env); 
    ci->return_context = (object)rc;
    
    printf("------- Starting eval ------\n");
    transfer(ci);

    object result = return_value(rc);

    printf("result: %i\n", result.number->value);

    return 0;
}
