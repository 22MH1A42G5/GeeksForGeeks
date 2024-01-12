//{ Driver Code Starts
import java.util.*;
class PalindromicArray{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0)
		{
			int n = sc.nextInt();
			int[] a = new int[n];
			for(int i = 0 ;i < n; i++)
				a[i]=sc.nextInt();
			GfG g = new GfG();
			System.out.println(g.palinArray(a , n));
		}
	}
}
// } Driver Code Ends




/*Complete the Function below*/
class GfG
{
    static int palindrome(int n){
        int temp=n,rev=0,rem;
        while(temp!=0){
            rem=temp%10;
            rev=rev*10+rem;
            temp/=10;
        }
        return rev==n?1:0;
    }
	public static int palinArray(int[] a, int n)
           {
                  //add code here.
                  for(int i=0;i<n;i++){
                      if(palindrome(a[i])!=1){
                          return 0;
                      }
                  }
                  return 1;
           }
}