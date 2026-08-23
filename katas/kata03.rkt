#lang racket

(define (maximo n)
  (if (null? (cdr n))
      (car n)
      (mayor (car n) (cdr n))))

(define (mayor n l)
  (if (negative? (- n (car l)))
      (maximo l)
      (maximo (cons n (cdr l)))
      ))