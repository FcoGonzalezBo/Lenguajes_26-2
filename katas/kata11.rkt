#lang racket

(define (merge-sorted l1 l2)
  (cond [(null? l1) l2]
        [(null? l2) l1]
        [(< (car l1) (car l2)) (cons (car l1) (merge-sorted (cdr l1) l2))]
        [else (cons (car l2) (merge-sorted l1 (cdr l2)))]))
      
