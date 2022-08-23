package ChatWithUi;

import java.awt.BorderLayout;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.InetAddress;
import java.net.Socket;

import javax.swing.JFrame;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;
import javax.swing.JTextField;

public class ChatClient extends JFrame {
    private JTextField enter;
    private JTextArea display;
    PrintWriter output;
    BufferedReader input;
    String message = "";

    public ChatClient() {
        setTitle("클라이언트");

        enter = new JTextField();
        enter.setEnabled(false);
        add(enter, BorderLayout.NORTH);
        display = new JTextArea();
        add(new JScrollPane(display), BorderLayout.CENTER);

        enter.addActionListener(e -> {
            message = e.getActionCommand();
            output.println("클라이언트 >>> " + message);
            display.append("\n클라이언트 >>>" + message);
            enter.setText("");
            if (message.contains("잘 있어"))
                System.exit(0);
        });

        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(300, 150);
        setVisible(true);
    }

    public void run() {
        Socket client;

        try {
            display.setText("연결 시도\n");
            display.setCaretPosition(display.getText().length());
            client = new Socket(InetAddress.getByName("127.0.0.1"), 5000);

            display.append(client.getInetAddress().getHostName() + "와 연결 성공");

            output = new PrintWriter(client.getOutputStream(), true);
            input = new BufferedReader(new InputStreamReader(client.getInputStream()));

            enter.setEnabled(true);

            do {
                try {
                    message = input.readLine();
                    display.append("\n" + message);
                    display.setCaretPosition(display.getText().length());
                } catch (Exception e) {
                }
            } while (!message.contains("잘있어"));

            output.close();
            input.close();
            client.close();
            System.exit(0);
        } catch (Exception e) {
        }
    }

    public static void main(String args[]) {
        new ChatClient().run();
    }
}