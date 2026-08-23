#lang racket

(struct punto (abs ord)  #:transparent)


(define (distancia p1 p2)
  (if (and (punto? p1) (punto? p2))
  (sqrt (+ (sqr (- (punto-abs p1) (punto-abs p2)))
           (sqr (- (punto-ord p1) (punto-ord p2)))))
  "Objetos no validos"))
  
  