
float Area(int a1, int b1, int a2, int b2, int a3, int b3) 
{ 

    return abs((a1 * (b2 - b3) + a2 * (b3 - b1) +  

                a3 * (b1 - b2)) / 2.0); 

} 



bool insideOutside(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x, int y) 

{ 

    /* Calculate area of rectangle ABCD */ 

    float A = Area(x1, y1, x2, y2, x3, y3) +  

              Area(x1, y1, x4, y4, x3, y3); 

  

    /* Calculate area of triangle PAB */ 

    float A1 = Area(x, y, x1, y1, x2, y2); 

  

    /* Calculate area of triangle PBC */ 

    float A2 = Area(x, y, x2, y2, x3, y3); 

  

    /* Calculate area of triangle PCD */ 

    float A3 = Area(x, y, x3, y3, x4, y4); 

  

    /* Calculate area of triangle PAD */ 

    float A4 = Area(x, y, x1, y1, x4, y4); 

  

    /* Check if sum of A1, A2, A3 and A4  

       is same as A */ 

    return (A == A1 + A2 + A3 + A4); 

} 
