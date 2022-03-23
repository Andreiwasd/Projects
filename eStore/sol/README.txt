	Consider ca aceasta proiect a fost foarte util deoarece am invatat mai bine sa folosesc functiile din STL. De asemenea am invatat utilitatea structurilor de 
date prezentate si aplicabilitatea lor in probleme reale.
	Consider ca problema a fost realizata intr-o modalitate eficienta deoarece au fost utilizate functii din STL.

Cerinta 1

	Aceasta cerinta presupune doar implementarea de functii obsinuite de tip constructor, setter, getter. Nu consider ca necesita
explicatii aditionale.


Cerinta 2
	
	 In aceasta cerinta am implementat gettere si settere pentru clasa Server.


Cerinta 3
	
	Query 1: In lista am salvat lista de produse. Am parcurs lista si am verificat categoria si tipul produsului
iar daca acestea indeplineau conditiile, atunci salvam produsul in listaEspressorD. La final am returnat
listaEspressorD.

	Query 2: In lista am salvat lista de useri. Am parcurs lista si am verificat daca tipul de User este BasicUser si
daca costul transportului este <11.5. Daca se indeplineau conditiile introduceam userul in listaUseri. La final am 
returnat listaUseri.

	Query 3: In lista am salvat lista de produse. Am parcurs lista de produse si am verificat daca tipul produsului este ResealedProduct
si daca motivul returnarii este "lipsa_accesorii". Pentru a apela functia getReason() am folosit un cast dinamic pentru a schimba tipul de date 
a unui produs in ResealedProduct. Daca se indeplinesc conditiile, introduc produsul in listaProdR. Apoi am sortat lista folosiind functia sort
din STL (listaProdR.sort(Utility::compare_resealed_products);). Am implementat in clasa Utility functia compare_resealed_products care
compara doua instante de tip ResealedProduct dupa pret (si in cadrul acestei functii folosesc un cast dinamic).
La final am returnat listaProdR.

	Query 4: In lista am salcat lista de produse. Am parcurs lista de produse si am verificat daca tipul produsului este FoodProduct.
Daca se indeplinea conditia salvam produsul in listaAlimente. pentru sortare folosesc dunctia sort din STL (listaAlimente.sort(Utility::compare_alimentary_products).
In clasa Utility am implementat functia compare_alimentary_products care compara doua produse de tip FoodProduct dupa tara de origine si pret.
In final returnez listaAlimente.

	Query 5: Am initializat un map<string, int> numita harta. Am parcurs lista de useri si in map am inserat judetul si numarul de 
utilizatori din judetul respectiv. Am parcurs map-ul si am cautat maximul. Am parcurs lista de user din nou si daca se indeplineau conditiile (judetul 
sa fie cel cu cei mai multi utilizatori, apartamentul = 0 si blocul = "-"), salvam userul in listaUser. Apoi am sorat listaUser cu functiia sort din STL
(listaUser.push_back(lista)). In clasa Utility am implementat functiia compare_id care compara doi Useri dupa userId. La final returnez listaUser.

	Query 6: Am parcurs lista de produse si am salvat in listaP doar produsele din categoria "telefon" sau "imprimanta". Dupa am parcurs lista de useri,
iar pentru fiecare PremiumUser parcurg listaProduse si lista discounturilor. Daca id-ul produseolr din cele doua liste coincide, atunci, in listaUserP
inserez userul. La final returnez listaUserP.

Cerinta 4

	Am implementat functii de tip get si set. 
	In functiia vector<int> processRequests(vector<int> requestsNo) am initializat un int numit elementsAtOnePoint care memoreaza cate elemente contine
vectorul lru. Parcurg vectorul requestNo si daca numarul de elemente din lru (elemntsAtOnePoint) este mai mic decat capacitatea lui lru , atunci voi
verifica daca elementul de inserat exista deja in lru. Daca nu, atunci voi insera la inceputul vectorului lru requestNo.at(i). Daca exista, permut toate 
elementele cu o pozitie la dreapta pana la elementul de adaugat, iar la inceputul vectorului lru introduc requestNo.at(i).
Daca numarul de elemente din lru (elementsAtOnePoint) este mai mare decat capacitatea, atunci folosesc acelasi procedeu, dar, in plus, daca elementul pe care 
vreau sa il introduc nu exista in lru si il inserez, trebuie sa sterg ultimul element din lru (lru.erase(lru.begin() + n)). 


Cerinta 5

	In clasa Product:
	-bool checkQuantity(int quantity) - am verificat daca requestedQuantity este mai mic decat quatity.
	-void decreaseQuantity(int quantity) - scad cantitatea cu requestedQuantity
	-void increaseQuantity(int quantity) - cresc cantitatea cu requestedQuantity

	In clasa ShoppingCart:
	-int getQuantity(int id) - returneaza cantitatea produsului cu id = productID                 
    	-void addProduct(int id, int quantity): - insereaza in shoppingCart produsul cu ID-ul si cu cantitatea quantity   
    	-void raiseQuantity(int id, int quantity) - creste cantitatea din shoppingCart a produsului cu id-ul dat ca parametru cu cantitatea quantity data ca 
parametru.
    	-void lowerQuantity(int id, int quantity) - scade cantitatea din shoppingCart a produsului cu id-ul dat ca parametru cu cantitatea quantity data ca 
parametru.
    	-void deleteProduct(int id) - sterge produsul cu id-ul dat ca parametru.

	In clasa Server:
	-bool requestAddProduct(int userID, int productID, int quantity) - Parcurg map-ul __UserID__ProductsCart__. Daca am gasit userul caruia vreau sa ii 
adaug produsul, verific daca produsul exista deja in cosul sau. In acest caz verific daca exista cantitatea dorita pe stoc, iar daca exista cresc cantitatea din 
cos si o scad pe cea din stoc. Daca produsul nu este deja in cos, verific daca exista cantitatea dorita, il adaug si scad cantitatea din stoc. Daca userul nu a 
fost gasit, atunci functia ve returna false. In cazul in care operatia a fost realizata cu succes, functia returneaza true.

	-bool Server::requestDeleteProduct(int userID, int productID, int quantity) - Parcurg map-ul __UserID__ProductsCart__. Daca am gasit userul caruia vreau 
sa ii sterg produsul, verific daca produsul exista in cosul de cumparaturi. In cazul in care gasim produsul vom verifica daca cantitatea de eliminat este mai 
mare decat cantitatea existenta in cos. Daca este mai mare, atunci vom creste cantitatea din stoc si vom sterge produsul din cos. In cazul in care cantitatea de eliminat
este mai mica decat cantitatea din cos, atunci vom scadea cantitatea din cos cu quantity,si vom creste cantitatea din stoc.
Daca operatia a fost realizata cu succes, atunci functia va returna true. Daca nu gasim userul sau produsul in cosul de cumparaturi, atunci functia va returna false.






















