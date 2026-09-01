#lang racket
(define (cross-product l1 l2)
  (if (null? l1)
      '()
      (append (pairing (car l1) l2) (cross-product (cdr l1) l2))))

(define (pairing x l)
  (if (null? l)
  '()
  (cons (list x (car l)) (pairing x (cdr l)))))
  