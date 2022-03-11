import java.util.List;
import java.util.Map;

public class Dictionar {
    String nameFile;
    Map<Integer, Integer> dimensiune;
    List<String> list;

    @Override
    public String toString() {
        String output = "";
        output += nameFile + "; ";

        for(Map.Entry<Integer,Integer> entry : dimensiune.entrySet()) {
            output += "{" + entry.getKey() + ":" + entry.getValue() + "}" + " ";
        }

        output += " {";
        for(String word : list) {
            output += word + " ";
        }
        output += "}";
        return output;
    }

    public Dictionar(String nameFile, Map<Integer, Integer> dimensiune, List<String> list) {
        this.nameFile = nameFile;
        this.dimensiune = dimensiune;
        this.list = list;
    }

    public void AddPair(int dim){
        if (dimensiune.containsKey(dim)) {
            int newValue = dimensiune.get(dim) + 1;
            dimensiune.put(dim, newValue);
        }
        else {
            dimensiune.put(dim, 1);
        }

    }

    public String getNameFile() {
        return nameFile;
    }

    public void setNameFile(String nameFile) {
        this.nameFile = nameFile;
    }

    public Map<Integer, Integer> getDimensiune() {
        return dimensiune;
    }

    public void setDimensiune(Map<Integer, Integer> dimensiune) {
        this.dimensiune = dimensiune;
    }

    public List<String> getList() {
        return list;
    }

    public void setList(List<String> list) {
        this.list = list;
    }
}
