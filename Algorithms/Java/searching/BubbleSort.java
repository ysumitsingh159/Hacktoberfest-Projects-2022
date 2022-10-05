// Java program for implementation of Bubble Sort
import java.util.*;
class BubbleSort {
	void bubbleSort(int arr[])//sorts the array
	{
		int n = arr.length;
		for (int i = 0; i < n - 1; i++)
			for (int j = 0; j < n - i - 1; j++)
				if (arr[j] > arr[j + 1]) {
					// swap arr[j+1] and arr[j]
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
	}

	/* Prints the array */
	void printArray(int arr[])
	{
		int n = arr.length;
		for (int i = 0; i < n; ++i)
			System.out.print(arr[i] + " ");
		System.out.println();
	}

	// Driver method to test above
	public static void main(String args[])
	{
		BubbleSort ob = new BubbleSort();
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter number of elements");//Input numbers from user
    int n=sc.nextInt();
    int arr[]=new int[n];
    System.out.println("Enter elements in array");
    for(int x=0;x<n;x++)
    {
      arr[x]=sc.nextInt();
    }
		ob.bubbleSort(arr);
		System.out.println("Sorted array");
		ob.printArray(arr);
	}
}