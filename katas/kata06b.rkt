#lang racket

(define (contador-nuevo)
  '())

(define (contador-inc c)
  (cons 1 c))

(define (contador-valor c)
  (length c))

(define (contar-hasta n)
  (if (= n 0)
      (contador-nuevo)
      (contador-inc (contar-hasta (- n 1)))))