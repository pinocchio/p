pid$1:pinocchio::entry
{
    self->ts = timestamp;
}

pid$1:pinocchio::return 
/self->ts/ 
{
    ela = timestamp - self->ts;
    @tot[probefunc] = sum(ela);
    @avg[probefunc] = avg(ela);
} 

END {
    trunc(@tot, 50);
    trunc(@avg, 50);
    normalize(@tot, 1000); 
    normalize(@avg, 1000); 
    
    printf("\nTotal [ms]: "); printa(@tot);
    printf("Average [ms]: "); printa(@avg);
}

