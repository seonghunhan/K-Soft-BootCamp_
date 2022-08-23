package kr.ac.inha.chap15;

import javax.swing.*;
import java.awt.*;

public class JFrameDemo extends JFrame{
    public JFrameDemo() {
        setTitle("채팅 프로그램");
        setLayout(new BorderLayout());

        JPanel p = new JPanel();
        JLabel l = new JLabel("소켓프로그래밍");
        JButton b = new JButton("전송");

        p.add(l);
        p.add(b);

        add(p, BorderLayout.SOUTH);
        add(new JButton("북쪽 버튼"), BorderLayout.NORTH);

        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        //setDefaultCloseOperation(JFrame.DO_NOTHING_ON_CLOSE);
        setSize(300, 100);
        setVisible(true);
    }

    public static void main(String[] args) {
        new JFrameDemo();
    }
}
