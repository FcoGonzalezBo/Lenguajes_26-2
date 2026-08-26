#lang racket

(define (copies n x)
  (if (= n 0)
      '()
      (cons x (copies (- n 1) x))))