class Pessoa{
	private:
		float peso;
	public:
		pessoa(float peso2){
		peso = peso2;
	 }

	void setpeso(float pesop){
		peso = pesop;
	 }

	float getPeso(){
	return peso;
	 }
	};

class elevador{
	private:
	vector <Pessoa*> quantidade;
	vector <Pessoa*> :: iterator ptr;
	vector <Pessoa*> quantidadekg;
	int limitep;
	float limitekg;
	int andar;
	float pesoatual;
		
	public:
	elevador(int limitep2, float limitekg2){
	andar = 0;
	pesoatual = 0;
	limitep = limitep2;
	limitekg = limitekg2;
	 }

	float pesoatualM(){

	return pesoatual;
	 }

	void pesomais(float n){
	pesoatual+=n;
	 }

	void pesomenos(float n){
	pesoatual-=n;
	 }

	void setLimiteP(int limitepessoas){
	limitep = limitepessoas;
	 }

	void setLimiteKG (int limitekgs){
	limitekg = limitekgs;
	 }

	void setAndar(int andares){
	andar = andares;
	 }

	int getLimiteP(){
	return limitep;
	 }

	float getLimiteKG(){
	return limitekg;
	 }

	int andarAtual(){
	return andar;
	 }

	void sobe(){
	andar+=1;
	 }

	void desce(){
	andar-=1;
	 }

	void entra(pessoa* p){
	if(quantidade.size()>= limitep || pesoatual>=limitekg){
	cout << "elevador cheio" << "\n";
	
		}else{

	quantidade.push_back(p);
	pesomais(p -> getPeso());
	 }
	}
		
	void sai(pessoa* p){
	for (int i =0; i<(quantidade.size()-1); i++){
	if (quantidade[i] = p){
	quantidade.erase(quantidade.begin()+i);
	break;
	 }
	}

	pesomenos(p->getPeso());
	 }

	const vector<pessoa*> getquantidade_p(){
	return quantidade;
	 }

	imprime(){
	for(unsigned i = 0; i<quantidade.size(); i++){
	cout << " " << quantidade[i]->getPeso();
	  }
	 }
	};

int main(){
	elevador e (4,240); //4 pessoas, 240Kg 
	pessoa p1(60);
	pessoa p2(70);
	pessoa p3(120);
	pessoa p4(20);
	pessoa p5(90);
	e.entra(&p1);
	e.entra(&p2);
	e.entra(&p3);
	e.entra(&p4);
	e.entra(&p5);
	e.sai(&p3);
	e.sobe();
	cout << "\n" << "andar atual: " << e.andar_atual();
	e.desce();
	cout << "\n" << "andar atual: " << e.andar_atual();
	
}