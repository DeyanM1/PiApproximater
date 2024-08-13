use std::f64;
use std::time::Instant;

fn main() {

    let t1 = Instant::now();

    let mut pi: f64 = 0.0;
    let mut divisor = 1.0;
    let iterations = 5000000.0;
    let mut iterations_used = 0.0;

    while iterations_used<iterations {
        pi = pi + 4.0/divisor - 4.0/(divisor+2.0);
        println!("Pi approximation after {} iterations ({:.03}%): {}", iterations_used, (iterations_used/iterations*100.0), pi);
        
        divisor += 4.0;
        iterations_used += 1.0;
    
    }

    let t2 = t1.elapsed();


    let difference = (f64::consts::PI - pi).abs();
    println!("Final Pi approximation: {} / {}  |  Difference: {}", pi, f64::consts::PI, difference);
    println!("Time taken: {:.2?}", t2);
}
