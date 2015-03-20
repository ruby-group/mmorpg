Feature: Create Customer content type
  In order to publish the customer
  As an admin user
  I should be able to successfully create Customers
  
  @api
  Scenario: Create a customer with all the mandatory fields in
    Given I am logged in as a user with the "administrator" role
    And I am on "/node/add/customer"
    When I fill in "title" with "Company 1"
    And I fill in "field_cust_contact_name[und][0][value]" with "Joe Hayes"
    And I fill in "field_cust_email[und][0][email]" with "Joe.Hayes@gmail.com"
    And I click "Publishing options"
    And I check the box "status"
    And I click "Save"
    Then I should see the link "Company 1"

  Scenario: Create a customer with all the fields in
    Given I am logged in as a user with the "administrator" role
    And I am on "/node/add/customer"
    When I fill in "title" with "Company 2"
    And I fill in "field_cust_contact_name[und][0][value]" with "Viru Sehwag"
    And I fill in "field_cust_email[und][0][email]" with "viru.sehwag@gmail.com"
    And I fill in "field_cust_phone_no[und][0][value]" with "987654321"
    And I fill in "field_cust_phone_ext[und][0][value]" with "080"
    And I fill in "field_cust_fax[und][0][value]" with "12345"
    And I select "United States" from "field_cust_address[und][0][country]"
    And I fill in "field_cust_address[und][0][thoroughfare]" with "Address 1"
    And I fill in "field_cust_address[und][0][postal_code]" with "1234"
    And I fill in "field_cust_address[und][0][locality]" with "Alabama"
    And I fill in "field_cust_discount[und][0][value]" with "10"
    And I fill in "field_cust_password[und][0][value]" with "Password"
    And I fill in "field_cust_notes[und][0][value]" with "Notes added"
    And I click "Publishing options"
    And I check the box "status"
    And I click "Save"
    Then I should see the link "Company 2"

  Scenario: Validate mandatory fields
    Given I am logged in as a user with the "administrator" role
    And I am on "/node/add/customer"
    And I click "Save"
    Then I should see the following <error messages>
    |error messages|
    |Company field is required.|
    |Contact Name field is required.|
    |Email field is required.       |