int isTrue(int p1, int p2, int p3, int p4)
{
    bool bp1 = p1 , bp2 = p2, bp3 = p3, bp4 = p4;
    
    if (bp1 || (bp2 && bp4) || !bp2 && !bp4 && bp3)
    {
        return 1;
    }
    
    
    return 0;
}
