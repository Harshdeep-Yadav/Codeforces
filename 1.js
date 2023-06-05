// Define the survey questions
const questions = [
    {
      question: "How satisfied are you with our products?",
      type: "rating",
      ratingOptions: ["1", "2", "3", "4", "5"]
    },
    {
      question: "How fair are the prices compared to similar retailers?",
      type: "rating",
      ratingOptions: ["1", "2", "3", "4", "5"]
    },
    {
      question: "How satisfied are you with the value for money of your purchase?",
      type: "rating",
      ratingOptions: ["1", "2", "3", "4", "5"]
    },
    {
      question: "On a scale of 1-10, how likely are you to recommend us to your friends and family?",
      type: "rating",
      ratingOptions: ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10"]
    },
    {
      question: "What could we do to improve our service?",
      type: "text"
    }
  ];
  
  // Function to generate the survey form dynamically
  function generateSurveyForm() {
    const form = document.getElementById("survey-form");
    
    questions.forEach((question, index) => {
      const inputField = document.createElement("div");
      inputField.className = "input-field";
  
      const label = document.createElement("label");
      label.textContent = `${index + 1}. ${question.question}`;
  
      if (question.type === "rating") {
        const select = document.createElement("select");
        select.name = `question-${index}`;
        
        question.ratingOptions.forEach(option => {
          const optionElement = document.createElement("option");
          optionElement.value = option;
          optionElement.textContent = option;
          select.appendChild(optionElement);
        });
  
        inputField.appendChild(select);
      } else if (question.type === "text") {
        const textarea = document.createElement("textarea");
        textarea.name = `question-${index}`;
  
        inputField.appendChild(textarea);
      }
  
      inputField.insertBefore(label, inputField.firstChild);
      form.insertBefore(inputField, form.lastChild);
    });
  }
  
  // Event listener for form submission
  document.getElementById("survey-form").addEventListener("submit", function(event) {
    event.preventDefault();
  
    // Collect form data
    const formData = new FormData(this);
    const surveyResponses = {};
  
    for (const [key, value] of formData.entries()) {
      surveyResponses[key] = value;
    }
  
    // Perform any necessary operations with the survey responses (e.g., sending them to a server)
    console.log(surveyResponses);
  
    // Reset the form
    this.reset();
  });
  
  // Generate the survey form on page load
  generateSurveyForm();
  