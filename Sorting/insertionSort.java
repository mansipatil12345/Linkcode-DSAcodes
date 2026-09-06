public class insertionSort {
    public static void insertionsort(int arr[]){
        int i,j;
        for(i=1;i<arr.length;i++){
            int key = arr[i];
            for(j=i-1;j>=0 && key<arr[j];j--){
                arr[j+1]=arr[j];
            }
            arr[j+1]=key;
        }
    }
    public static void print(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+"   ");
        }
    }
    public static void main(String[] args) {
        int arr[]={1,3,2,5,4,6};
        insertionsort(arr);
        print(arr);
    }
}
