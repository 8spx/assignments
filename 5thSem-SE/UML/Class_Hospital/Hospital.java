import java.util.Vector;

public class Hospital {

  public String Name;

  public Integer Id;

  public String Place;

    /**
   * 
   * @element-type Nurse
   */
  public Vector  WORKS IN;
    public Vector  myOperation_Theatre;
    public Vector  myWard;
    /**
   * 
   * @element-type Surgeon
   */
  public Vector  WORKS FOR;
    /**
   * 
   * @element-type Patient
   */
  public Vector  myPatient;

  public void Perform_Diagonisis() {
  }

  public void AddPatient() {
  }

  public void AddSurgeon() {
  }

  public void Pay_Salary() {
  }

  public void Discharge_Patient() {
  }

  public void ReplaceSurgeon() {
  }

}