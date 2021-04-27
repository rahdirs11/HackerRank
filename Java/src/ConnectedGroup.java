import java.util.Scanner;

public class ConnectedGroup {
    private static final Scanner scan = new Scanner(System.in);
    public static void main(String[] args){
        int n = scan.nextInt();
        scan.nextLine();
        int[][] related = new int[n][n];
        for (int i = 0; i < n; ++i){
            String line = scan.nextLine();
            for (int j = 0; j < n; ++j){
                related[i][j] = Integer.parseInt(line.charAt(j) + "");
                if (i != 0){
                    if (i == j){
                        related[i][j] = 1;
                        continue;
                    } else{
                        if (related[i][j] == 1 && j - 1 >= 0)
                            if (related[i-1][j-1] == 1)
                                related[i-1][j] = 1;
                    }
                    if (related[i][j] == 0 && related[j][i] == 1)
                        related[i][j] = 1;
                }
            }
        }
        int numberOfGroups = 0;
        int i = 0;
        while (i < n){
            int j = i;
            while (related[i][j] == 1) {
                ++j;
                if (j == n) break;
            }
            ++numberOfGroups;
            i = j;
        }
        System.out.println(numberOfGroups);
//        for (int i = 0; i < n; ++i) {
//            for (int j = 0; j < n; ++j)
//                System.out.print(related[i][j] + " ");
//            System.out.println();
//        }
    }
}
