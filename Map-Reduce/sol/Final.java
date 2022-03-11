import javax.print.DocFlavor;
import java.util.List;
import java.util.Map;

public class Final {
    String nameFile;
    float rang;
    int lungimeMaxima;
    int nrCuvinte;

    public Final(Final a) {
        this.nameFile = a.nameFile;
        this.rang = a.rang;
        this.lungimeMaxima = a.lungimeMaxima;
        this.nrCuvinte = a.nrCuvinte;
    }

    public Final() {
        nameFile = "";
        rang = 0;
        lungimeMaxima = 0;
        nrCuvinte = 0;
    }

    public Final(String nameFile, int rang, int lungimeMaxima, int nrCuvinte) {
        this.nameFile = nameFile;
        this.rang = rang;
        this.lungimeMaxima = lungimeMaxima;
        this.nrCuvinte = nrCuvinte;
    }

    @Override
    public String toString() {
        String output = "";
        output += nameFile + "," + String.format("%.2f", rang) + "," + lungimeMaxima + "," + nrCuvinte;
        return output;
    }

    public String getNameFile() {
        return nameFile;
    }

    public void setNameFile(String nameFile) {
        this.nameFile = nameFile;
    }

    public float getRang() {
        return rang;
    }

    public void setRang(float rang) {
        this.rang = rang;
    }

    public int getLungimeMaxima() {
        return lungimeMaxima;
    }

    public void setLungimeMaxima(int lungimeMaxima) {
        this.lungimeMaxima = lungimeMaxima;
    }

    public int getNrCuvinte() {
        return nrCuvinte;
    }

    public void setNrCuvinte(int nrCuvinte) {
        this.nrCuvinte = nrCuvinte;
    }
}
