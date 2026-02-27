use std::io;

fn main(){
    let mut idade = String::new();
    io::stdin().read_line(&mut idade).expect("Idade invalida!");
    let idade: i32 = idade.trim().parse().expect("Erro ao converter idade");
    
    if idade <= 4 {
        println!("Muito jovem pra competir");
    } else if idade <= 7{
        println!("Infantil A");
    }
    else if idade <= 10{
        println!("Infantil B");
    }
    else if idade <= 13{
        println!("Juvenil A");
    }
    else if idade <= 17{
        println!("Juvenil B");
    }
    else{
        println!("Senior")
    }

}
