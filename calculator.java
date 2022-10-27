//CS20B1098 TUSHAR PANJETA
//CALCULATOR ACTION APPLET

import java.applet.Applet;
import java.awt.event.*;
import java.awt.*;

public class calculator extends Applet implements ActionListener
{
    double result;
    double num1,num2,check,nv=0;
    
    Button []b = new Button[10];
    Button badd;
    Button bsub;
    Button bmul;
    Button bdiv;
    Button bclr;
    Button beql;
    Button bmod;
    Button bdel;
    Button bsign;
    Button bfloat;

    TextField ans;

    public void init()
    {
        
        setBackground(Color.black);
        setLayout(null);

        int x=10,y=350,count=0,k=5;
        for(int i=0;i<=9;i++)
        {
            
            b[i]=new Button(" " +(i));
            
            if((count-1)%3==0||count==0)
            {
                x=10;
                y=70*k;
                k--;
            }
            if(count==0)
            {
               b[i].setBounds(x,y,130,60); 
            }
            else
            {
                b[i].setBounds(x,y,60,60);
            }
            add(b[i]);
            x=x+70;
            count++;

        }

        Color c = new Color(97,179,59);
        bfloat = new Button(".");
        bfloat.setForeground(c);
        bfloat.setBounds(150,350,60,60);
        add(bfloat);

        beql = new Button("=");
        beql.setForeground(c);
        beql.setBounds(220,350,60,60);
        add(beql);

        badd = new Button("+");
        badd.setForeground(c);
        badd.setBounds(220,280,60,60);
        add(badd);

        bsub = new Button("-");
        bsub.setForeground(c);
        bsub.setBounds(220,210,60,60);
        add(bsub);

        bmul = new Button("✕");
        bmul.setForeground(c);
        bmul.setBounds(220,140,60,60);
        add(bmul);

        bdiv = new Button("÷");
        bdiv.setForeground(c);
        bdiv.setBounds(220,70,60,60);
        add(bdiv);

        bmod = new Button("%");
        bmod.setForeground(c);
        bmod.setBounds(150,70,60,60);
        add(bmod);

        bdel = new Button("<-");
        bdel.setForeground(c);
        bdel.setBounds(220,10,60,60);
        add(bdel);

        bsign = new Button("+/-");
        bsign.setForeground(c);
        bsign.setBounds(80,70,60,60);
        add(bsign);

        bclr = new Button("C");
        bclr.setForeground(Color.red);
        bclr.setBounds(10,70,60,60);
        add(bclr);

        ans = new TextField();
        ans.setBounds(10,10,200,60);
        ans.setBackground(Color.black);
        ans.setForeground(Color.white);
        ans.setEditable(false);
        add(ans);

        for(int i=0;i<=9;i++)
        {
            b[i].addActionListener(this);
        }
        
        badd.addActionListener(this);
        bsub.addActionListener(this);
        bmul.addActionListener(this);
        bdiv.addActionListener(this);
        bmod.addActionListener(this);
        beql.addActionListener(this);
        bclr.addActionListener(this); 
        bdel.addActionListener(this);
        bsign.addActionListener(this);
        bfloat.addActionListener(this);

    }

    public void actionPerformed(ActionEvent e)
    { 
        if(nv==1)
        {
            ans.setText("");
            ans.setForeground(Color.white);
            nv=0;
        }
        
        String z,zt;
        
        //for number buttons
        for(int i=0;i<10;i++)
        {
            if(e.getSource()==b[i])
            {
                zt=ans.getText();
                z=zt+""+(i);
                ans.setText(z);
            }
        }
        
        //for decimal
        if(e.getSource()==bfloat)
        {  
            zt=ans.getText();
            z=zt+".";
            ans.setText(z);
        }
        //for sign change
        if(e.getSource()==bsign)
        { 
            zt=ans.getText();
            z="-"+zt;
            ans.setText(z);
        }
        //for delete
        if(e.getSource()==bdel)
        { 
            zt=ans.getText();
            try
            {
                z=zt.substring(0, zt.length()-1);
            }
            catch(StringIndexOutOfBoundsException f)
            {
                return;
            }
            ans.setText(z);
        }
        //for add
        if(e.getSource()==badd)
        {                    
            try
            {
                num1=Double.parseDouble(ans.getText());
            }
            catch(NumberFormatException f)
            {
                ans.setForeground(Color.red);
                ans.setText("Never Settle");
                nv=1;
                return;
            }
            z="";
            ans.setText(z);
            check=1;
        }
        //for sub
        if(e.getSource()==bsub)
        {                    
            try
            {
                num1=Double.parseDouble(ans.getText());
            }
            catch(NumberFormatException f)
            {
                ans.setForeground(Color.red);
                ans.setText("Never Settle");
                nv=1;
                return;
            }
            z="";
            ans.setText(z);
            check=2;
        }
        //for mul
        if(e.getSource()==bmul)
        {                   
            try
            {
                num1=Double.parseDouble(ans.getText());
            }
            catch(NumberFormatException f)
            {
                ans.setForeground(Color.red);
                ans.setText("Never Settle");
                nv=1;
                return;
            }
            z="";
            ans.setText(z);
            check=3;
        }
        //for div
        if(e.getSource()==bdiv)
        {                  
            try
            {
                num1=Double.parseDouble(ans.getText());
            }
            catch(NumberFormatException f)
            {
                ans.setForeground(Color.red);
                ans.setText("Never Settle");
                nv=1;
                return;
            }
            z="";
            ans.setText(z);
            check=4;
        }
        //for mod
        if(e.getSource()==bmod)
        {                 
            try
            {
                num1=Double.parseDouble(ans.getText());
            }
            catch(NumberFormatException f)
            {
                ans.setForeground(Color.red);
                ans.setText("Never Settle");
                nv=1;
                return;
            }
            z="";
            ans.setText(z);
            check=5;
        }
        //for output
        if(e.getSource()==beql)
        {          
            try
            {
                num2=Double.parseDouble(ans.getText());
            }
            catch(Exception f)
            {
                ans.setForeground(Color.red);
                ans.setText("Never Settle");
                nv=1;
                
                return;
            }
            if(check==1)
                result =num1+num2;
            if(check==2)
                result =num1-num2;
            if(check==3)
                result =num1*num2;
            if(check==4)
                result =num1/num2;    
            if(check==5)
                result =num1%num2; 

            if(String.valueOf(result)=="Infinity" ||String.valueOf(result)=="-Infinity"||String.valueOf(result)=="NaN") 
            {
                ans.setForeground(Color.red);
                ans.setText("Never Settle");
                nv=1;
            }  
            else
            ans.setText(String.valueOf(result));
        }
        //for clear
        if(e.getSource()==bclr)
        {
            num1=0;
            num2=0;
            check=0;
            result=0;
            nv=0;
            z="";
            ans.setText(z);
        } 
    }

}
/*
<applet code="calculator.class" width="290" height ="420">
</applet>
*/