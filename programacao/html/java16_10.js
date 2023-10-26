
//acessando o botao atraves do seu id
let btn1=document.querySelector('#btn1');

btn1.addEventListener('click',()=>{

    let nome=document.querySelector('#nome');

    let texto_nome=nome.value;

    let num1=document.querySelector('#num1');

    let num2=document.querySelector("#num2");

    let valor1=num1.value;

    let valor2=num2.value;

    let p=document.querySelector(".p1");

    p.textContent=`o nome é ${texto_nome} o primeiro número: ${valor1} e o segundo numero ${valor2}`;

    })