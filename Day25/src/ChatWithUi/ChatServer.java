package ChatWithUi;

import java.awt.BorderLayout;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.ServerSocket;
import java.net.Socket;

import javax.swing.JFrame;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;
import javax.swing.JTextField;

public class ChatServer extends JFrame {
    private JTextField enter;
    private JTextArea display;
    PrintWriter output;
    BufferedReader input;
    String message = "";

    public ChatServer() {
        setTitle("채팅 서버");

        enter = new JTextField();
        enter.setEnabled(false);
        add(enter, BorderLayout.NORTH);
        display = new JTextArea();
        add(new JScrollPane(display), BorderLayout.CENTER);

        enter.addActionListener(e -> {
            message = e.getActionCommand();
            output.println("서버 >>> " + message);
            display.append("\n서버 >>>" + message);
            enter.setText("");
            if (message.contains("잘 있어"))
                System.exit(0);
        });

        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(300, 150);
        setVisible(true);
    }

    public void run() {
        ServerSocket server;
        Socket connection;

        try {
            server = new ServerSocket(5000, 100);

            while (true) {
                display.append("연결 대기 중.....\n");
                display.setCaretPosition(display.getText().length());
                connection = server.accept();

                display.append(connection.getInetAddress().getHostName() + "와 연결");

                output = new PrintWriter(connection.getOutputStream(), true);
                input = new BufferedReader(new InputStreamReader(connection.getInputStream()));
                enter.setEnabled(true);

                do {
                    try {
                        message = input.readLine();
                        display.append("\n" + message);
                        display.setCaretPosition(display.getText().length());
                    } catch (Exception e) {
                    }
                } while (!message.contains("잘있어"));

                display.append("\n사용자가 연결 종료\n");
                display.setCaretPosition(display.getText().length());
                enter.setEnabled(false);
                output.close();
                input.close();
                connection.close();
            }
        } catch (Exception e) {
        }
    }

    public static void main(String args[]) {
        new ChatServer().run();
    }
}