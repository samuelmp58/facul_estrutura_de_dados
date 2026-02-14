use std::io::{self, Write};

fn main() {
    let mut input_peso = String::new();
    let mut input_altura = String::new();

    print!("Digite seu peso (kg): ");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut input_peso).expect("Falha ao ler peso");

    print!("Digite sua altura (m): ");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut input_altura).expect("Falha ao ler altura");

    let peso: f32 = input_peso.trim().parse().expect("Por favor, digite um numero");
    let altura: f32 = input_altura.trim().parse().expect("Por favor, digite um numero");

    let imc = peso / (altura * altura);

    if imc < 20.0 {
        println!("Classificação: Abaixo do peso");
    } else if imc < 25.0 {
        println!("Classificação: Peso Ideal");
    } else {
        println!("Classificação: Acima do Peso");
    }
}
