
/* end of generated code */

    object themain = (object)make_iconst(lambda_1_x);
    appcall_object maincall = make_appcall(themain, 0);
    
    context_object make_eval_context(ci, maincall, env); 
    build_return(ci, rc);
    
    transfer(ci);

    object result = return_value(rc);

    printf("result: %i", result.number->value);

    return 0;
}
