package com.nazakatumrani.a01_practice;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    Button button;
    EditText firstNumText;
    EditText secondNumText;
    TextView resultText;
    Button multButton;
    EditText multNum;
    TextView multTableGenerated;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        firstNumText = findViewById(R.id.editTextFirstNumber);
        secondNumText = findViewById(R.id.editTextSecondNumber);
        resultText = findViewById(R.id.textView2);
        button = findViewById(R.id.button);
        multButton = findViewById(R.id.multTableGenerateButton);
        multNum = findViewById(R.id.multiplicationTableNumber);
        multTableGenerated = findViewById(R.id.multiplicationTable);
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Toast.makeText(MainActivity.this, "Hi", Toast.LENGTH_SHORT).show();
                resultText.setText(Integer.toString(Integer.parseInt(firstNumText.getText().toString())+Integer.parseInt(secondNumText.getText().toString())));
            }
        });
        multButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String str = "";
                int num = Integer.parseInt(multNum.getText().toString());
                for (int i=1; i<=10; i++){
                    str += num+" x " + i + " = " + num*i + "\n";
                }
                multTableGenerated.setText(str);
            }
        });

    }
}