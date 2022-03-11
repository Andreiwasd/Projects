import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class Reduce {
    String nameFile;
    Map<Integer, Integer> sizes;
    List<String> lists;
    int dimensiunea_maxima;

    public Reduce() {
        sizes = new HashMap<>();
        lists = new ArrayList<>();
        dimensiunea_maxima = 0;
    }

    public void addSizes(Map<Integer,Integer> mapToAdd){
        for(Map.Entry<Integer,Integer> entry : mapToAdd.entrySet()){
            int key = entry.getKey();
            int value = entry.getValue();
            if(sizes.containsKey(key)){
                int newValue = sizes.get(key);
                newValue += value;
                sizes.put(key,newValue);
            }
            else{
                sizes.put(key,value);
            }
        }
    }

    public int computeMaxDimension(){
        int max = 0;
        for(Map.Entry<Integer,Integer> entry : sizes.entrySet()){
            if(entry.getKey()>max){
                max = entry.getKey();
            }
        }
        return max;
    }

    public void addList(List<String> listToAdd){
        for(String word : listToAdd){
            lists.add(word);
        }
        eliminateWordsShorterThanMax();
    }

    public void eliminateWordsShorterThanMax(){
        int max_dim = computeMaxDimension();
        for(int index=0; index<lists.size(); index ++){
            String word = lists.get(index);
            if(word.length() != max_dim){
                lists.remove(index);
            }
        }
    }

    @Override
    public String toString() {
        String output = "";
        output += nameFile + "; ";

        output += "{";
        for (Map.Entry<Integer, Integer> entry : sizes.entrySet()) {
            output += entry.getKey() + ": " + entry.getValue();
            output += ", ";
        }
        if (output.charAt(output.length() - 1) != '{') {
            output = output.substring(0, output.length() - 2);
        }
        output += "}, ";

        output += "(\"";
        for(String word : lists) {
            output += word;
        }
        output += "\") ";
        if (output.substring(output.length() - 3).equals("(\"\")")) {
            output = output.substring(0, output.length() - 3) + ")";
        }
        return output;
    }

    public String getNameFile() {
        return nameFile;
    }

    public void setNameFile(String nameFile) {
        this.nameFile = nameFile;
    }

    public Map<Integer, Integer> getSizes() {
        return sizes;
    }

    public void setSizes(Map<Integer, Integer> sizes) {
        this.sizes = sizes;
    }

    public List<String> getLists() {
        return lists;
    }

    public void setLists(List<String> lists) {
        this.lists = lists;
    }
}