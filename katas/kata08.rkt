#lang racket

(define (flip-pairs l)
   (if (null? l)
       '()
       (cons (list (car(cdr(car l))) (car(car l)))(flip-pairs (cdr l)))))