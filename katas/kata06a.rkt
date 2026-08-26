#lang racket

(define (contador-nuevo)
  0)

(define (contador-inc c)
  (+ c 1))

(define (contador-valor c)
  c)

(define (contar-hasta n)
  (if (= n 0)
      (contador-nuevo)
      (contador-inc (contar-hasta (- n 1)))))