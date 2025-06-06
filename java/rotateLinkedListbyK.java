public class rotateLinkedListbyK {
    public static class ListNode {
        int val;
        ListNode next;

        ListNode(int x) {
            val = x;
            next = null;
        }
    }
    public ListNode rotateRight(ListNode head, int k) {
        if (head == null || head.next == null || k <= 0) {
            return head;
        }

        // Step 1: Find the length of the linked list
        int length = 1;
        ListNode tail = head;
        while (tail.next != null) {
            tail = tail.next;
            length++;
        }

        // Step 2: Calculate the effective rotation
        k = k % length;
        if (k == 0) {
            return head; // No rotation needed
        }

        // Step 3: Find the new tail and new head
        ListNode newTail = head;
        for (int i = 1; i < length - k; i++) {
            newTail = newTail.next;
        }
        
        ListNode newHead = newTail.next;
        newTail.next = null; // Break the link

        // Step 4: Connect the old tail to the old head
        tail.next = head;

        return newHead; // Return the new head of the rotated list
    }
    public static void main(String[] args) {
        // Example usage
        ListNode head = new ListNode(1);
        head.next = new ListNode(2);
        head.next.next = new ListNode(3);
        head.next.next.next = new ListNode(4);
        head.next.next.next.next = new ListNode(5);

        rotateLinkedListbyK solution = new rotateLinkedListbyK();
        ListNode rotatedHead = solution.rotateRight(head, 2);

        // Print the rotated list
        ListNode current = rotatedHead;
        while (current != null) {
            System.out.print(current.val + " ");
            current = current.next;
        }
    }
}