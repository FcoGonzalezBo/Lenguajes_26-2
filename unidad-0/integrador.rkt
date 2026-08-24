#lang racket

(struct num-exp (n)        #:transparent)  
(struct id-exp (id)         #:transparent)
(struct add-exp (izq der)  #:transparent)   
(struct mul-exp (izq der)  #:transparent)
(struct with-exp (id exp cuerpo)  #:transparent)

(define (calc e asocs)
  (match e
    [(num-exp n)       n]
    [(add-exp izq der) (+ (calc izq asocs) (calc der asocs))]
    [(mul-exp izq der) (* (calc izq asocs) (calc der asocs))]
    [(id-exp id) (buscar id asocs)]
    [(with-exp id exp cuerpo) (calc cuerpo (extender asocs id (calc exp asocs))) ]
    ))


(define (asocs-vacias) '())

(define (extender asocs nombre valor)
  (cons (cons nombre valor) asocs))

(define (buscar nombre asocs)
  (cdr (assoc nombre asocs)))

#|
Trazado with x = add(2, 3) in with y = mul(x, 2) in add(x, y)

Abreviaturas
N2 = (num-exp 2)   N3 = (num-exp 3)
A = (add-exp N2 N3)
B = (mul-exp (id-exp x) N2)
C = (add-exp (id-exp x) (id-exp y))

(calc (with-exp x A ((with-exp y B C) sigma0)) sigma0)
= (calc  ((with-exp y B C) sigma0) extend(sigma0, x, (calc A sigma0)))                             [with]
= (calc  ((with-exp y B C) sigma0) extend(sigma0, x, (calc (calc N2 sigma0) + (calc N3 sigma0))))) [add]
= (calc  ((with-exp y B C) sigma0) extend(sigma0, x, 2 +3 )))                                      [num]
= (calc  ((with-exp y B C) sigma1) con sigma1 = extend(sigma0, x, 5)
= (calc C) extend (sigma1, y, (calc B sigma1))                                                     [with]
= (calc C) extend (sigma1, y, (calc id-exp x sigma1) * (calc N2 sigma1))                           [mul]
= (calc C) extend (sigma1, y, (calc id-exp x sigma1) * 2)                                          [num]
= (calc C) extend (sigma1, y, lookup(x, sigma1) * 2)                                               [id]
= (calc C) extend (sigma1, y, 5 * 2)                               
= (calc C sigma2) con sigma2 = extend(sigma1, y, 10)             
= (calc (id-exp x) + (id-exp y) sigma2)                                                            [sum]
= lookup(x, sigma2) + lookup(y, sigma2)                                                            [id]
= 5 + 10
= 15


|#