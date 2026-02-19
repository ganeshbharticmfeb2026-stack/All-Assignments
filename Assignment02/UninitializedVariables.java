class UninitializedVariables {

    public static void main(String[] args) {

        byte a = 0;
        short b = 0;
        int c = 0;
        long d = 0L;
        float e = 0.0f;
        double f = 0.0;
        char g = '\u0000';  
        boolean h = false;

      
        System.out.println("byte a = " + a);
        System.out.println("short b = " + b);
        System.out.println("int c = " + c);
        System.out.println("long d = " + d);
        System.out.println("float e = " + e);
        System.out.println("double f = " + f);
        System.out.println("char g = " + g);
        System.out.println("boolean h = " + h);
    }
}
