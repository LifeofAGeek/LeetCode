/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
 
 //DFS 
class Solution {
    public boolean isValidSequence(TreeNode root, int[] arr) {

        return existPath(root, arr, 0);
        
    }
    
    
    public static boolean existPath(TreeNode root, int arr[], int index){
         if(root==null || index >= arr.length || arr.length==0)  
            return false; 
        
  
        if((root.left==null && root.right==null) && (root.val==arr[index]&& root.val==arr[arr.length-1])) 
            return true; 
       
        boolean ans = false;
        if(root.val==arr[index]){
            ans = existPath(root.left,arr,index+1) || existPath(root.right, arr, index+1);
            
        }
        
        return ans;
    }
}
