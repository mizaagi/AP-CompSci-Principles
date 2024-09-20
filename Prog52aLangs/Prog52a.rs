#[macro_use]
mod cin;
use std::io::{Write};

fn main() {
    println!("Enter width: ");
    input!(width as i32);
    println!("Enter length: ");
    input!(length as i32);

    let area = width * length;
    let perim = 2*width + 2*length;
    println!("Area: {}", area);
    println!("Perim: {}", perim);
}