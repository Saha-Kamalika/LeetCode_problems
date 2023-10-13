/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if(head==null || head.next==null) return head;
        TreeMap<Integer,Integer> map=new TreeMap<>();
        ListNode curr=head;
        while(curr!=null){
            map.put(curr.val,map.getOrDefault(curr.val,0)+1);
            curr=curr.next;
        }
        ListNode nhead=new ListNode(-1);
        ListNode temp=nhead;
        for(int i: map.keySet()){
            if(map.get(i)==1){
                ListNode newnode=new ListNode(i);
                temp.next=newnode;
                temp=newnode;
            }
        }
        return nhead.next;
    }
}
