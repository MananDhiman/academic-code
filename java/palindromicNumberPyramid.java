public class palindromicNumberPyramid{
    public static void main(String[] args) {
        int number = 5;

        for(int i=1;i<=number;i++){
            for(int j=number-i;j>0;j--){
                System.out.print("  ");
            }
            for(int j=i;j>=1;j--){
                System.out.print(j+" ");
            }
        
            for(int j=2; j <=i; j++){
                if(i==1)
                    continue;
                System.out.print(j + " ");
            }

            System.out.println();
        }
    }
}
