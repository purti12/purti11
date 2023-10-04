import java.util.Scanner;
public class Multiply {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of rows for the first matrix: ");
        int rowsA = scanner.nextInt();
        System.out.print("Enter the number of columns for the first matrix: ");
        int colsA = scanner.nextInt();
        System.out.print("Enter the number of rows for the second matrix: ");
        int rowsB = scanner.nextInt();
        System.out.print("Enter the number of columns for the second matrix: ");
        int colsB = scanner.nextInt();
        if (colsA != rowsB) {
            System.out.println("Matrix multiplication is not possible.");
            return;
        }
        int[][] matrixA = inputMatrix("first", rowsA, colsA, scanner);
        int[][] matrixB = inputMatrix("second", rowsB, colsB, scanner);
        int[][] resultMatrix = multiplyMatrices(matrixA, matrixB);
        System.out.println("Resultant Matrix:");
        displayMatrix(resultMatrix);
        scanner.close();
    }
    private static int[][] inputMatrix(String name, int rows, int cols, Scanner scanner) {
        System.out.println("Enter elements for the " + name + " matrix:");
        int[][] matrix = new int[rows][cols];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print("Enter element at position (" + (i + 1) + "," + (j + 1) + "): ");
                matrix[i][j] = scanner.nextInt();
            }
        }
        displayMatrix(matrix);
        return matrix;
    }
    private static int[][] multiplyMatrices(int[][] matrixA, int[][] matrixB) {
        int rowsA = matrixA.length;
        int colsA = matrixA[0].length;
        int colsB = matrixB[0].length;
        int[][] resultMatrix = new int[rowsA][colsB];
        for (int i = 0; i < rowsA; i++) {
            for (int j = 0; j < colsB; j++) {
                for (int k = 0; k < colsA; k++) {
                    resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
                }
            }
        }
        return resultMatrix;
    }
    private static void displayMatrix(int[][] matrix) {
        for (int[] row : matrix) {
            for (int element : row) {
                System.out.print(element + " ");
            }
            System.out.println();
        }
    }
}
