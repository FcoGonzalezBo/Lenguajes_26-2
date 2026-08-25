#lang racket

(struct punto (abs ord)  #:transparent)

(define (mas-lejano n)
  (if (null? (cdr n))
      (car n)
      (mayor (car n) (cdr n))))

(define (mayor n l)
  (if (negative? (- (distancia-origen n) (distancia-origen (car l))))
      (mas-lejano l)
      (mas-lejano (cons n (cdr l)))
      ))

(define (distancia-origen p)
  (sqrt (+ (sqr (- 0 (punto-abs p)))
           (sqr (- 0 (punto-ord p))))))