#lang racket

(define (replace-at l n x)
   (if (= n 0)
       (cons x (cdr l))
       (cons (car l) (replace-at (cdr l) (- n 1) x))))