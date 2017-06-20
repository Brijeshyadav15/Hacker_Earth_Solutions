    import java.util.*;
    class TestClass {
    public static void main(String args[] ) throws Exception {
    Scanner sc = new Scanner(System.in);
    int N=sc.nextInt();
    int arr[]=new int[N+1];
    for(int i=1;i<=N;i++){
    arr[i]=sc.nextInt();
    }
    int S=sc.nextInt();
    int E=sc.nextInt();
    int temp=S;
    int r=1;
    while(true){
    if(S==E){
    System.out.println("Yes");
    break;
    }
    S=arr[S];
    if(S==temp||r>N){
    System.out.println("No");
    break;
    }
    r++;
    }
    }
    }
