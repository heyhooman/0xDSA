// Daily DSA w/Hooman

// This problem was asked by Amazon.

// Run-length encoding is a fast and simple method of encoding strings. The basic idea is to represent repeated successive characters as a single count and character. For example, the string "AAAABBBCCDAA" would be encoded as "4A3B2C1D2A".

// Implement run-length encoding and decoding. You can assume the string to be encoded have no digits and consists solely of alphabetic characters. You can assume the string to be decoded is valid.


public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String code = input.nextLine();
        StringBuilder encode = new StringBuilder();
        Stack<Character> stack = new Stack<>();
        stack.push(code.charAt(0));

        for (int i = 1; i < code.length(); i++) {
            if (stack.peek() == code.charAt(i)) stack.push(code.charAt(i));
            else {
                encode.append(stack.size());
                encode.append(stack.peek());
                stack.removeAllElements();
                stack.push(code.charAt(i));
            }
        }

        System.out.println(encode);
    }