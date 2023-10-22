# Halmazok
A matematikai logika elemei
Dolgok együttese

## Jelölések
A = {elemek}
A = {x|x∈ Z, x > 1997}
A = {minden páros szám}
A = ]-8;9]
A = 0

## Halmaz kapcsolatok
- Részhalmaz: A minden eleme B-nek is eleme - A ⊆ B
- Valódi részhalmaz: A minden eleme B-nek is eleme, és B-nek vannak ezen felül elemei. - A ⊂ B
- Egyenló halmazok: Ha A minden eleme B-nek is eleme és B minden eleme A-nak is eleme
- Komplementer halmaz: Ha A részhalmaza B-nek, akkor a B halmaz azon része, melybe A elemei nem tartoznak bele az A halmaz komplementerét jelentik. Mindig valamilyen alaphalmaz figyelembe vételével történik.
- Equivalens (egyenértékű) halmazok: Ha A és B elemei között kölcsönöseg egyértelmű megfeleltetés lehetséges. Tehát A minden eleméhez egy és csakis egy elem rendelhető hozzá B-ből, és B minden eleméhez egy és csakis egy elem rendelhető hozz A-ból. Tehát azonos az elemszámuk.

## Halmazműveletek
Eljárások melynek során bizonyos halmazokból új halmazokat állítunk elő.

### Átcsoportosítják a halmazok elemeit
- Únió: A és B halmaz elemei közül azok, amelyek legalább az egyikben benne vannak - A ∪ B
- Metszet: A és B közös elemei (A és B szorzata) - A ∩ B, amely halmazoknak nincs metszete azok diszjunktak
- Különbség: Az A halmaz azon elemei, melyek nem elemei B-nek - A \ B (B komplemetere)

### Megváltoztatják a halmazok elemeit
- Direkt szorzat (karteziánus szorzat): A és B elemeit rendezett párokba soroljuk. Értve ez alatt azt, hogy úgy megyünk végig A összes elemén, hogy B összes elemével egy-egy párt alkotunk:
A = {1;2;3}
B = {4;5;6}
A X B = {(1;4); (1;5); (1;6); (2;4); (2;5); (2;6); (3;4); (3;5); (3;6)}
Itt számít az elemek sorrendje, A X B nem egyenlő B X A-val

## Disztributiv szabályok (halmaz azonosságok)
Három halmaz esetén
A ∩ (B ∪ C) = (A ∩ B) ∪ (A ∩ C)
A ∪ (B ∩ C) = (A ∪ B) ∩ (A ∪ C)

## Logika
A helyes matematikai következtetések szerkezeti törvényeivel foglalkozik a matematikai logika.
Logikai ítélet: egy kijelentő mondat, melyről egyértelműen eldönthető, hogy a benne foglalt állítás igaz-e vagy hamis.

## Logikai műveletek
- Tagadás: Egy adott állítás ellenkező igazságértékű állítása (Nem igaz, hogy...) - ¬P
- Konjunkció: Két állítás éssel összekpcsolása. Akkor és csakis akkor igaz, ha mindkét állítás igaz. - P∧Q
- Diszjunkció: Két állítás vaggyal összekapcsolása. Ha legalább az egyik állítás igaz, akkor igaz - P ∨ Q
- Implikáció: Ha P akkor Q, akkor és csak is akkor hamis, ha P igaz, de Q hamis (tehát ha P hamis és Q igaz, attól még igaz)- P → Q
- Ekvivalencia (kölcsönös megfeleltetés): P akkor és csak is akkor, ha Q. Akkor és csakis akor igaz, ha mindkét állítás igaz. - P ↔ Q

## Logikai azonosságok
- ¬(¬p) = p
- (p ∨ q) ∨ r = p ∨ (q ∨ r)
- p ∨ ¬p = i, p ∧ ¬p = h
- ¬(p ∧ q) = ¬p ∨ ¬q
- ¬(p ∨ q) = ¬p ∧ ¬q
- p ∧ q = ¬(¬p ∨ ¬q)
- p ↔ q = (p → q) ∧ (q → p)

# Függvények
A halmaz minden elemét megfeleltetjük B halmaz valamely elemének, ezt a hozzárendelést egy függvénynek nevezzük.

## Változók
- Független: amihez hozzárendeljük egy másik halmaz egy elemét
- Függő: amilyen értéket a hozzárendelónk a független változóhoz

## Függvény fontos értékei
- Értelmezési tartomány: Az a halmaz, melyhez hozzárendeljük egy másik halmaz elemeit (az A halmaz)
- Értékkészlet: Az a halmaz, melyben azok az értékeke vannak, amelyet hozzárendelünk egy halmaz elemeihez (a B halmaz egy részhalmaza)
- Zérushelyek: A függvény nullánál felvett értéke.

# Hozzárendelés fajtái
- Injektív: Ha nem minden elemet rendeljük hozzá (tobb az elem a B halmazban)
- Szürjektív: Ha van több olyan elem, amelyhez ugyanazt az értéket rendeljük hozzá (több az elem az A halmazban)
- Bijektív: Ha minden elemhez egyet és csakis egyet rendelünk hozzá (egyenlő számúak az elemek mindkettőben, kölcsönös a megfeleltetés)

## Grafikon módosítása
- Eltolás
- Nyújtás
- Tükrözés

## Algebrai műveletek hatása a függvény képére
- y = f(x) + k - függőleges eltolás
- y = f(x+k) - vizszintes eltolás az előjellel ellentétes irányba
- y = cf(x) - függőleges c-szeres nyújtás
- y = 1/cf(x) - függőleges c-szeres zsugorítás
- y = f(cx) - vizszintes c-szeres zsugorítás
- y = f(x/c) - vizszintes c-szeres nyújtás
- y = -f(x) - x tengelyre tükrözés
- y = f(-x) - y tengelyre tükrözés

## Korlátosság
- Az f függvény értelmezési vizsgált tartományában van egy olyan K érték, melynél egyik következő föggvényérték (f(x)) abszolútértéke sem nagyobb (|f(x)| <= K)
- Alsó korlát: ha f(x) <= K
- Felső korlát ha f(x) >= K 

## Monotonitás
- Az f függvény értelmezés tartományának egy intervalluma monoton növekvő, ha: x_1 < x_2 -> f(x_1) <= f(x_2)
- Az f függvény értelmezés tartományának egy intervalluma monoton cs0kkenő, ha: x_1 < x_2 -> f(x_1) >= f(x_2)

Ha nem lehet egyenlő, akkor szigorúan monoton nő vagy csökken.

## Minimum, maximum
- Maximum: ha az értelmezési tartományon van egy olyan x_0 érték, melynek a környezetében minden f(x) értékre igaz, hogy f(x) <= f(x_0)
- Minimum: ha az értelmezési tartományon van egy olyan x_0 érték, melynek a környezetében minden f(x) értékre igaz, hogy f(x) >= f(x_0)

## Paritás
- Páros: f(x) = f(-x)
- Páratlan: f(x) = -f(-x)

# Inverz
Az a függvény, mely visszaállítja az eredeti függvény által végrehajtott műveletet (2x inverze az 1/2 x x^2-é az sqrt(x))

## Folytonosság, határérték

# Valós számok
Felépítés az egész számoktól az irracionális számokig.
1. Természetes számok: összeadás, szorzás
Mindent összeadásra és szorzásra fogunk visszavezetni, és annak tulajdonságaira (komutativitás, asszociativitás)
Van amire nem igaz: a + x = 0
Kellenek a negatív számok, hogy negatív számokkal is összeadhassunk (avagy kivonhassunk :D)
2. Egész számok: összeadás, kivonás, szorzás
Van amire nem igaz: ax = b
Kellenek a törtek, hogy törtekkel is lehessen szorozni (avagy osztani)
3. Racionális számok: összeadás, kivonás, szorzás osztás
Az egységnégyzet átlóját nem tudjuk kifejezni két egész szám hényadosaként.
Vannak végtelen, nem szakaszos tozedestörtek.

# Komplex számok
## Fogalma
## Számsík
## Argumentum
## Konjugáltság
## Algebrai műveletek komplex számokkal