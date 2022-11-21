//Newton Raphson Method
class NRM {
     
    static double func(double x)
    {
		/*	f(x) yang hendak dicari akarnya
		 *	1. 4x^3 - 5x^2 + 17x - 6  	x0=3, tgr=0.001, n=10
		 *	2. x^3 – 2x^2 + 3x – 6 		x0=3, tgr=0.001, n=10
		 * 	3. x^5 + 2x^2 – 4 			x0=1, tgr=0.001, n=10
		 */
        return (4*x*x*x - 5*x*x + 17*x - 6);
    }
     
    static double funcT(double x)
    {
		/*	turunan dari fungsi diatas
		 *	1. 12x^2 - 10x + 17
		 * 	2. 3x^2 - 4x + 3
		 * 	3. 5x^4 + 4x
		 */
        return (12*x*x - 10*x + 17);
    }
     
    static void newtonRaphson(double x, double tgr, int n)
    {
        int i = 0;
        while (i<n && (Math.abs(func(x)) >= tgr))
        {
			i+=1;
			x = x - (func(x)/funcT(x));
        }
     
        System.out.printf("Akar nya adalah : " +"%,.6f", x);
    }
     

    public static void main (String[] args)
    {
        double x0 = 3;	//pendekatan awal
        double tgr = 0.001;	//toleransi galat error
        int n = 10;		//iterasi Maksimum
        newtonRaphson(x0, tgr, n);
    }
}
