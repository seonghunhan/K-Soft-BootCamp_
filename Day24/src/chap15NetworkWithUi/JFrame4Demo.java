package chap15NetworkWithUi;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import java.awt.*;

public class JFrame4Demo extends JFrame {
    JFrame4Demo() {
        setTitle("채팅 프로그래밍");

        JPanel p = new JPanel();
        JLabel l = new JLabel("소켓 프로그래밍");
        JButton b = new JButton("버튼");
        p.add(l);
        p.add(b);
        add(p, BorderLayout.SOUTH);
        add(new JButton("북쪽 버튼"), BorderLayout.NORTH);



        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(300, 100);
        // pack();
        setVisible(true);
    }

    public static void main(String[] args) {
        new JFrame4Demo();
    }
}