public class oddEvenLinkedList {
    public static class ListNode {
        int val;
        ListNode next;

        ListNode(int x) {
            val = x;
            next = null;
        }
    }
    public ListNode oddEvenList(ListNode head) {
        if (head == null || head.next == null) {
            return head; // No need to rearrange
        }

        ListNode odd = head; // Start with the first node as odd
        ListNode even = head.next; // Start with the second node as even
        ListNode evenHead = even; // Keep track of the head of the even list

        while (even != null && even.next != null) {
            odd.next = odd.next.next; // Link odd nodes together
            even.next = even.next.next; // Link even nodes together

            odd = odd.next; // Move to the next odd node
            even = even.next; // Move to the next even node
        }

        odd.next = evenHead; // Connect the end of the odd list to the head of the even list

        return head; // Return the rearranged list starting from head
    }
    public static void main(String[] args) {
        // Example usage
        ListNode head = new ListNode(1);
        head.next = new ListNode(2);
        head.next.next = new ListNode(3);
        head.next.next.next = new ListNode(4);
        head.next.next.next.next = new ListNode(5);

        oddEvenLinkedList solution = new oddEvenLinkedList();
        ListNode rearrangedHead = solution.oddEvenList(head);

        // Print the rearranged list
        ListNode current = rearrangedHead;
        while (current != null) {
            System.out.print(current.val + " ");
            current = current.next;
        }
    }
}